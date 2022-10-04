import java.util.*;



public class UnionAndIntersection {

	public static void main(String[] args) {

		int[] arr1 = new int[] {1,2,3,4};
		int[] arr2 = new int[] {6,56,3,4};
        Set<Integer> s = new HashSet<>();
		
		for(int i: arr1)
		{
			s.add(i);
		}
		
		int count = 0;
		for(int i: arr2)
			{
			    if(s.contains(i)) 
			    {			
				count++;
				s.remove(i);
			    }
			}
		
		System.out.println(count);
		
	}

}
