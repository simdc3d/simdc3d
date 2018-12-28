#ifndef EVENT_H
#define EVENT_H

#include "FNSS-Property-Container.h"
#include "FNSS-Quantity.h"
#include "FNSS-Units.h"

#include <string>

namespace fnss {

/**
 * Represent an event of an event schedule
 *
 * @author Cosmin Cocora
 *
 */
class Event : public PropertyContainer {
public:
	/**
	 * Constructor.
	 *
	 * @param time the time at which the event occurs.
	 */
	Event(const Quantity &time_ = Quantity("0sec", Units::Time));

	/**
	 * Get method for the scheduled time of the event.
	 *
	 * @return the time at which the event occurs.
	 */
	Quantity getTime() const;

	/**
	 * Set method for the event's scheduled time.
	 *
	 * @param time the time at which the event occurs.
	 */
	void setTime(const Quantity &time_);

	bool operator>(const Event &other) const;
	bool operator>=(const Event &other) const;
	bool operator<(const Event &other) const;
	bool operator<=(const Event &other) const;

private:
	Quantity time;	//The scheduled time of the event.

};

} //namespace

#endif //EVENT_H