#include <iostream>
#include "cppunit/extensions/HelperMacros.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "BookTest.hpp"

int main(){
	CPPUNIT_TEST_SUITE_REGISTRATION(BookTest);
	//if to devide tests in unit
	//CPPUNIT_TEST_SUITE_NAMED_REGISTRATION();
	CppUnit::TextUi::TestRunner runner;
	CppUnit::TestFactoryRegistry &registry = CppUnit::TestFactoryRegistry::getRegistry ();
	runner.addTest(registry.makeTest());
/*
	//replace this
	CppUnit::TextUi::TestRunner runner;
	runner.addTest(BookTest::suite());
*/
	if(runner.run()){
		return 0;
	}else{
		return 1;
	}
}
 
