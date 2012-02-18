#include <string>
using std::string;


class Book{
	private:
		string m_title;
		string m_author;
	public:
		Book(string const &title,string const &author):m_title(title),m_author(author){
			if(m_title.empty()){
				throw std::exception( );	
			}
				
		}
		string getTitle(){return m_title;}
		string getAuthor(){return m_author;}
};

