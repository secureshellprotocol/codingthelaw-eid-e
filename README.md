
Coding the Law
EID 101 Workshop Assignment
Instructions
You are designing an automated law enforcement system that will issue tickets to
speeding drivers on a given stretch of “smart highway.” This road contains sensors that
determine the speed of all vehicles and license plate readers that uniquely identify all vehicles.
In this assignment you are to develop an algorithm (in a programming language of your
choice, or an algorithm that you manually implement) that determines the time and number of
speeding ticket(s) to be issued to a driver. You are provided two files. The first
(driving_data.csv) contains a Comma Separated Value (CSV) series of time stamps and vehicle
speeds, one sample per line (time in minutes, speed in MPH), taken from an automobile’s on-
board computer. The second file (speedlimit.csv) contains a matching series of timestamps and
speed limits. The timestamp in this file indicates the time in minutes at which the vehicle
encountered the given speed limit. You will need to examine each file and construct appropriate
logic to determine when violations occurred. To assist you with the file reading, you are also
provided “EID101-Parser.c” which will read the data from each CSV into arrays of floating-point
numbers. This assignment can be done by hand, but those with programming experience may
want to explore an automated solution.
Below are extracts from the laws you are enforcing:
https://www.nysenate.gov/legislation/laws/VAT/1180
https://www.nysenate.gov/legislation/laws/VAT/1181
Penalties for Speeding | Governor's Traffic Safety Committee (ny.gov)
Your approach to coding the law and determining violations will vary by class section.
Sections A & B - Code what you believe to be the “letter of the law,” e.g. a strict interpretation
of the law.
Sections C & D - Code what you believe to be the “intent of the law.” e.g. an interpretation
based on normal police law enforcement behaviors.
Section E - Code the law based on the design specification on the next page.
Your program or algorithm should determine the time that your software issued any ticket(s) and
a total number of tickets.
There is no right answer for the number of ticket(s) to be issued to the driver, but your code
should be based on the law and the per section guidance provided above. However, please
make a list of at least 5 assumptions you made during the design and coding process. These
assumptions should be based on your interpretation of the law and how you implemented it in
code.
Deliverable – Complete the questionnaire at https://forms.office.com/r/EEYHGMZNwY
before class on Tuesday
EID 101 Section E
“Coding the Law” Design Specification
Your program should issue traffic tickets based on the following logic. You are to
assume that the sensor is properly calibrated and the results are accurate within +-3
MPH, the maximum capability of the sensor. Only a single sample of exceeding the
speed limit is required to issue a ticket, but tickets will only be issued unless the driver
has exceeded the speed limit by 13.0 MPH (for speed limits greater than 30.0 MPH) and
8.0 MPH (for speed limits of 30.0 MPH or less). This allowance is based on a 10.0 MPH
and 5.0 MPH allowance, respectively, due to driver norms on the roadways where the
data was collected and an assumption that the accuracy of the sensor falls 3.0 MPH
against the driver, the worst case. At least 5.0 minutes must transpire before another
ticket may be issued. Tickets may be issued immediately upon the start of the sensor
data. As long as a ticket meets the above criteria there is no limit to the total number of
tickets that may be given.
