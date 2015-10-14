public class Boza {
    
    
    public static void nested(int nRows,int nElementsInRow,int startingNumber){	
	for (int i = startingNumber ; i < nRows+startingNumber ; i++ ){
	    for (int j = i ; j < nElementsInRow + i ; j++){
		System.out.print(j + " ");
	    }
	    System.out.println();
	}
    }
        
    public static void nested_rec(int nr,int nel,int start){
	
	for (int i = start; i < nel+start ; i++){
	    if (nr == 0) break;
	    else {
		System.out.print(i + " ");
		if (i+1 == nel+start){
		    nr = nr-1;
		    System.out.println();
		    nested_rec(nr,nel,start+1);
		}
	    }
	}
	
    }
    
    public static void main (String[] args){

	nested_rec(5,4,2);

    }
}
