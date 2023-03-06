#include "Engineer.h"

Engineer::Engineer(string n, int id, float sa, string sp, int ex, int oh, float ohr):Employee(n, id, sa), speciality(sp), experience(ex), overtime_hours(oh), overtime_hour_rate(ohr)
{
}

float Engineer::get_total_salary()
{	return salary + (overtime_hours * overtime_hour_rate);
}

void Engineer::print()
{
	Employee::print();
	cout << "Speciality = [" << speciality << "] Experience = [" << experience << "] Overtime Hours = [" << overtime_hours << "] Overtime Hour Rate = [" << overtime_hour_rate << "]" << endl;

}
