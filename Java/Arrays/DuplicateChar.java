import java.util.*;

public class DuplicateChar {

	public static void main(String[] args) {
		
		String A = "guptaat";
		char[] newchar =  A.toCharArray();
		Arrays.sort(newchar);
		
		for (int i = 1; i < newchar.length; i++) {
			if(newchar[i] == newchar[i-1])
			{
				System.out.println("rejected at " + newchar[i]);
			}
		}		
	    
	    
	}
	    
	}


