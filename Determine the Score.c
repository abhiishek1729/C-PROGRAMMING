/*Chef appeared for a placement test.

There is a problem worth ?
X points. Chef finds out that the problem has exactly 
10
10 test cases. It is known that each test case is worth the same number of points.
Chef passes 
N test cases among them. Determine the score Chef will get.
NOTE: See sample explanation for more clarity.
Input Format
First line will contain 
T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers ?
X and ?
N, the total points for the problem and the number of test cases which pass for Chef's solution.
Output Format
For each test case, output the points scored by Chef.
 */
 
#include <stdio.h>
int main(void) {
	
	int t, x, T;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d", &x ,&T);
	    int points_per_test= x/10;
	    printf("%d\n", points_per_test * T );
	    
	}
	return 0;

}

