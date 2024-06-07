#ifndef COMPANY_H
#define COMPANY_H
#include "Bus.h"
#include "LinkedList.h"
#include "Station.h"
#include "LinkedQueue.h"
class Company {
private:
	int Number_of_stations;    
	int between_stations;    
	int Wheel_buses;           
	int Mixed_buses;            
	int capacity_wheel_buses;  
	int capacity_mixed_buses;   
	int Journeys_befor_checkup; 
	int chekup_duration_wheel;  
	int chekup_duration_mixed; 

	int max_waiting_time;     
	int get_on_off_time_seconds;

	int average_waiting_time_hour;
	int average_waiting_time_minute;
	int average_trip_time_hour;
	int average_trip_time_minute;
	int num_of_promoted_passengers; 
	int number_of_normal_passengers;
	int number_of_wheel_passengers;
	int number_of_special_passengers;
	double Utilization_Time;
	double Utilization_Time2;
	double Busy_Time;
	double Busy_Time2;
	LinkedList<Passenger*> Finished_Passengers;  
	LinkedList<Bus*> Busy_Bus;
	LinkedList<Bus*> Bus_List;

public:
	int count_removed_person;
	int number_of_events;
	LinkedQueue<Event*> tot_events;
	Company();
	LinkedQueue<Event*> queue_of_events;
	void setcount_removed_person(int c);
	void read_input();
	void read_events();
	void initialize_buses(Station** array);
	void Pass_Passenger(Station** array);
	void Place_in_Station_Zero(Station** array, Bus** arrayb);
	Station** Array_Of_Stations();
	void Move_Bus_to_Stations(Station** station, int Station_number, char bus_type, bool bus_direction);
	int get_station() const { return Number_of_stations; }
	void add_me(int Hour, int Minute, Station** array);
	void set_number_of_stations(int n);
	void Simulate_Branch(Station** array);
	void Simulate();
	void Remove_passenger(Station** array);
	void calculate_average_waiting_time();
	void calculate_average_trip_time();
	void output_file(Station** array_of_stations, int Number_of_stations);
	void output_file2(Station** array_of_stations, int Number_of_stations);
	double calculate_total_count_promoted(Station** array_of_stations, int Number_of_stations);
	Passenger** removed_person;
};
#endif