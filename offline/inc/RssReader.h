 ///
 /// @file    RssReader.h
 /// @author  mistydew(mistydew@qq.com)
 /// @date    2017-11-12 10:18:38
 ///

#ifndef __RSSREADER_H__
#define __RSSREADER_H__

#include <string>
#include <vector>
#include <utility>
#include <sstream>

namespace my
{

inline std::string int2str(std::size_t inum)
{
	std::ostringstream oss;
	oss << inum;
	return oss.str();
}

struct RssItem
{
	std::string title;
	std::string link;
	std::string content;
};

class RssReader
{
public:
	void init(const std::string & path);
	void parseRss();
	void dump(const std::string & fileName);
private:
	void parseRss(const std::string & fileName);
	void dumpOffset(const std::string & fileName);
private:
	std::vector<std::string> _docs;
	std::vector<RssItem> _articles;
	std::vector<std::pair<std::size_t, std::size_t> > _offset;
};

} // end of namespace my

#endif
