# Tom_Push_swap
Push_swap

This is the version that is a little bit ... bastard. It contains 2 smaller version.

Version 1: stack a unsorted. I start to sort them in stack b
Version 2: stack a unsorted. I push all of them to stack b until we have 3 elements left in a. Then I start to sort them in stack a.

They all use the same logic: for example:
Version 1: count how many ra and rra needed to put a[i] (i = 1 - > i = a[0]) to the top, rb and rrb to put b[i] (the position that a[i[ should be in stack b) to the top.
Which one is shorter (paar ra, rb || ra rrb || rra rb || rra rrb), then it will be chosen. And keep doing that until the end.
Version 2: role of a[i] and b[i] is changed.

Version 3:

First run Version 1, until cnt_check elements are sorted in stack b.
Then I push all the rest from a to b and then push all sorted elements from b to a.
Then run Version 2 - That cnt_check elements are sorted in stack a. Now it sorts the rest from stack b to a.

nbr = numbers from input.
cnt_check runs from 1 to nbr - 3.

I check, which case has least number of movements. Then i choose it and print it out.
To know which case has least number of movements, i have a ft_rules that has a static structure to store number of movements and the moments itself.
I have (t_to_return *) to create an array of structure.
First, i run only version 3, so that i won't have problem with small && smaller numbers. It's actually more efficient for smaller number of elements.
set t_to_return ret[0] = ft_rules(0,0,0) to call it, create new structure. Then, run version 1,2. When the fuctions is invoked, it will store these movements and count movements.
When it's done, call ret[0] = ft_rules(1,0,0) to take the data there.
Then i do that again for ret[1], but since here, we run the logic of version 3.
Then i compare them, choose the smaller, and keep doing that untill cnt_check stops.

Then, at the end, i have data and number of movements of the case that needs least steps. Then i print it out. when i print it out, i use ft_write_rules that will print rules when they sort.
Actually, we only need to print, don't need to sort again, so u guys can remove something if u wanna.

-Tom-

Score: 125/125
