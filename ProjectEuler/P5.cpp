int p5() {

	// we want the smallest number that is evenly divisible by 1 through 20
	// to do this we want to multiply all the numbers that will handle every other number

	// we have to multiply all the primes out, so we start by doing
	// 2*3*5*7*11*13*17*19
	// the only numbers we need to account for are 4,6,8,9,10,12,14,15,16,18,and 20.
	// 2*3 makes 6, take it off the list
	// 5*2 makes 10, take it off the list
	// 7*2 makes 14, take it off the list
	// 5*3 makes 15, take it off the list
	// we are now left with 4,8,9,12,16,18, and 20 to account for.
	// we can add another 2 in our product to give: 2*2*3*5*7*11*13*17*19
	// 2*2 is 4, take it off the list
	// 2*2*3 is 12, take it off the list
	// 2*2*5 is 20, take it off the list
	// left with 8,9,16, and 18.
	// add another 3 to handle 9: 2*2*3*3*5*7*11*13*17*19
	// 3*3 is 9, take it off the list
	// 2*3*3 is 18, take it off the list
	// left with 8 and 16.
	// we can add two more 2's to yield the following: 2*2*2*2*3*3*5*7*11*13*17*19
	// 2*2*2 is 8, take it off the list
	// 2*2*2*2 is 16, take it off the list.
	// We've accounted for everything, simplify the above to 9*16*5*7*11*13*17*19 and return.
	return 9*16*5*7*11*13*17*19;
}