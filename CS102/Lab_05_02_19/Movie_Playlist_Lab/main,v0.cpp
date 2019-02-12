#include <iostream>
using namespace std;

ClipINFO::ClipINFO()
{}

ClipINFO::ClipINFO(const std::string& ClipTitle, const std::string ClipType, const std::string[] ClipSize)
{
	

class Video {
	private:
	std::string title;
	std::string[] length;
	std::vector<ClipINFO> play_list;

	public:
	Video(string Name, string Type, string[] Duration) {
		title  = Name;
		length = Duration;
	}
	string get_title() const {
		return title;
	}
	string[] get_length() const {
		return length;
	}
	void randClip(ClipINFO&& clip);
	friend std::ostream& operator<<(std::ostream& ostr, const Video& clip);
};


