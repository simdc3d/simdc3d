#ifndef APPLICATION_H
#define APPLICATION_H

#include "FNSS-Property-Container.h"

#include <string>

namespace fnss {

/**
 * Represent an application deployed on a node.
 *
 * An application is identified by a name and contains a set of properties.
 *
 * @author Cosmin Cocora
 *
 */

class Application : public PropertyContainer {
public:
	/**
	 * Constructor.
	 *
	 * @param name name of the application.
	 */
	Application(const std::string &name_ = "");

	/**
	 * Get method for the application name.
	 *
	 * @return the name of the application.
	 */
	std::string getName() const;

	/**
	 * Set method for the application name.
	 *
	 * @param name name of the application.
	 */
	void setName(const std::string &name_);

private:
	/**
	 * Name of the application.
	 */
	std::string name;
};

} //namespace

#endif //APPLICATION_H
