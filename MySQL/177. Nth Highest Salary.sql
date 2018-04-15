CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
      declare M INT;
      set M = N-1;
  RETURN (
      select distinct Salary as getNthHighestSalary
      from Employee
      order by Salary desc
      limit M,1
  );
END