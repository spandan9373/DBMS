CREATE TABLE Students (
    id INT,
    name VARCHAR(50),
    city VARCHAR(50),
    marks INT
);

INSERT INTO Students VALUES
(1, 'Spandan', 'Mumbai', 85),
(2, 'Rahul', 'Pune', 78),
(3, 'Amit', 'Delhi', 92),
(4, 'Neha', 'Mumbai', 88);

SELECT * FROM Students;

SELECT 
    UPPER(name) AS Upper_Name,
    LOWER(city) AS Lower_City,
    LENGTH(name) AS Name_Length
FROM Students;

SELECT 
    COUNT(*) AS Total_Students,
    AVG(marks) AS Average_Marks,
    MAX(marks) AS Highest_Marks,
    MIN(marks) AS Lowest_Marks,
    SUM(marks) AS Total_Marks
FROM Students;

SELECT city, COUNT(*) AS Total
FROM Students
GROUP BY city;
