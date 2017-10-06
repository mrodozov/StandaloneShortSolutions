#!/usr/bin/python

import os
import shutil
import subprocess

release_lib_path = '/cvmfs/cms-ib.cern.ch/week1/slc7_aarch64_gcc700/cms/cmssw/CMSSW_9_4_X_2017-09-27-1100/lib/slc7_aarch64_gcc700/'
local_lib_path = '/build/cmsbld/mrodozov/CMSSW_9_4_X_2017-09-27-1100/lib/slc7_aarch64_gcc700/'

lib_names = [f for f in os.listdir(os.path.join(local_lib_path)) if f.endswith('.so') and not f.find('copied') is not -1]

num_of_libs = len(lib_names)

def makeSymlinks(list_to_be_used,local_lib_path,release_lib_path):
	for i in (list_to_be_used):
		os.rename(os.path.join(local_lib_path,i),local_lib_path+i+'.copied')
		os.symlink(os.path.join(release_lib_path,i), os.path.join(local_lib_path,i))

def removeSymlinks(list_to_be_used,local_lib_path,release_lib_path):
	for i in (list_to_be_used):
		if os.path.islink(os.path.join(local_lib_path,i)):
			os.remove(os.path.join(local_lib_path,i))
			if os.path.exists(os.path.join(local_lib_path+i+'.copied')):
				os.rename(local_lib_path+i+'.copied',os.path.join(local_lib_path,i))


def testIsFailing(test_command):
	p = subprocess.Popen(command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, close_fds=True)
	stdout, stderr = p.communicate()
	retval = False
	if stdout.find('An exception of category \'InsertFailure\' occurred ') is not -1:
		retval = True
	return retval
	

def splitAndSearchList(listToSearch,local_lib_path,release_lib_path,test_command):
	if len(listToSearch) == 1:
		print 'failing lib is ', listToSearch[0]
		return
	left_side = listToSearch[:len(listToSearch)/2]
	right_side = listToSearch[len(listToSearch)/2:]
	makeSymlinks(left_side,local_lib_path,release_lib_path)
	nextListToSearch = right_side
	if testIsFailing(test_command):
		nextListToSearch = left_side
	removeSymlinks(left_side,local_lib_path,release_lib_path)
	
	print 'narrowing libs to: ', nextListToSearch
	
	splitAndSearchList(nextListToSearch,local_lib_path,release_lib_path,test_command)
	

command = "cmsRun MinBias_8TeV_pythia8_TuneCUETP8M1_cff_GEN_SIM.py"

splitAndSearchList(lib_names,local_lib_path,release_lib_path,command)

