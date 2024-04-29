#include &lt;iostream&gt;
#include &lt;string&gt;
using namespace std;
class Book {
protected:
    string title;
    string author;
    string publisher;
public:
    Book(const string&amp; t, const string&amp; a, const string&amp; p)
        : title(t), author(a), publisher(p) {}
    void display() const {
        cout &lt;&lt; &quot;Title: &quot; &lt;&lt; title &lt;&lt; endl;
        cout &lt;&lt; &quot;Author: &quot; &lt;&lt; author &lt;&lt; endl;
        cout &lt;&lt; &quot;Publisher: &quot; &lt;&lt; publisher &lt;&lt; endl;
    }
};
class FictionBook : public Book {
private:
    string genre;
    string protagonist;
public:
    FictionBook(const string&amp; t, const string&amp; a, const string&amp; p, const string&amp;
g, const string&amp; pro)
        : Book(t, a, p), genre(g), protagonist(pro) {}
    void display() const {
        Book::display();

        cout &lt;&lt; &quot;Genre: &quot; &lt;&lt; genre &lt;&lt; endl;
        cout &lt;&lt; &quot;Protagonist: &quot; &lt;&lt; protagonist &lt;&lt; endl;
    }
};
int main() {
   
    FictionBook fiction(&quot;The Great Gatsby&quot;, &quot; Scott Fitzgerald&quot;, &quot;Scribner&quot;,
&quot;Novel&quot;, &quot;Jay Gatsby&quot;);
   
    fiction.display();
    return 0;
}
