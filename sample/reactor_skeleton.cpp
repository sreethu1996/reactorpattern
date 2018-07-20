#include<iostream>

using namespace std;

enum Event_Type
	{
   		ACCEPT_EVENT = 01,
    	READ_EVENT = 02,
    	WRITE_EVENT = 04,
    	TIMEOUT_EVENT = 010,
    	SIGNAL_EVENT = 020,
    	CLOSE_EVENT = 040
	};

class Initiation_Dispatcher
     // Demultiplex and dispatch Event_Handler in response to client requests.
	{
		public:
    // Register an Event_Handler of a particular
    // Event_Type (e.g., READ_EVENT, ACCEPT_EVENT,
    // etc.).
    	int register_handler (Event_Handler *eh, Event_Type et);
	// Remove an Event_Handler of a particular
    // Event_Type.
    	int remove_handler (Event_Handler *eh, Event_Type et);
	// Entry point into the reactive event loop.
    	int handle_events (Time_Value *timeout = 0);
	};

class Event_Handler
    // = TITLE
    //      Abstract base class that serves as the
    //      target of the Initiation_Dispatcher.
{
public:
    // Hook method that is called back by the
    // Initiation_Dispatcher to handle events.
    virtual int handle_event (Event_Type et) = 0;

    // Hook method that returns the underlying
    // I/O Handle.
    virtual Handle get_handle (void) const = 0;
};

class Concrete_Event_HandlerA : public 	Event_Handler
{


} 
int main(){

	return 0;
}