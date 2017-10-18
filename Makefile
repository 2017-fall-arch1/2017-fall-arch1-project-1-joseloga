employeeList :Project1.c
	gcc -o employeeList Project1.c
	gcc -c Functions.c


clean:
	rm -f *.o project1
	rm employeeList
	rm employeeTable.txt

demo: 
	./employeeList

