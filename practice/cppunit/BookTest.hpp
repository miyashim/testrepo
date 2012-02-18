#include "cppunit/TestCase.h"
// must include (in addiiton to book)
#include "cppunit/extensions/HelperMacros.h"
#include "Book.hpp"
#include <iostream>
using std::string;

class BookTest : public CppUnit::TestFixture{
        private:
                Book *book;
        public:
                //case-intensive
                void setUp( ){
                        book = new Book("Cosmos","Carl Sagan");
                }
                //case-intensive
                void tearDown( ){
                        delete book;
                }
		
		void testInvalidTitle( )throw (std::exception){
			Book *badBokk = new Book("","Mark Twain");
			
		} 
                void testTitle( ){

                        //CPPUNIT_ASSERT_EQUAL( string("Cosmos"),book->getTitle());
                        CPPUNIT_ASSERT_EQUAL( string("Cosmos_failure"),book->getTitle());

                }
                void testAuthor( ){
                        CPPUNIT_ASSERT_EQUAL( string("Carl Sagan"),book->getAuthor());
                }
		void testAlwaysFails(){
			return CPPUNIT_FAIL("Expected Failure");
		}
		//very strct ;don't forget ()
		CPPUNIT_TEST_SUITE(BookTest);
		//example 7-11 test exception 
		CPPUNIT_TEST_EXCEPTION(testInvalidTitle,std::exception);
		//example 7-12 fail as expected test
		CPPUNIT_TEST_FAIL(testAlwaysFails);

		//example 7-13
		CPPUNIT_TEST_SUITE_END();

};


