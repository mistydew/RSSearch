 ///
 /// @file    noncopyable.h
 /// @author  mistydew(mistydew@qq.com)
 /// @date    2017-11-04 12:32:42
 ///

#ifndef __NONCOPYABLE_H__
#define __NONCOPYABLE_H__

namespace md
{

class Noncopyable
{
protected:
    Noncopyable() {}
    ~Noncopyable() {}
private:
    Noncopyable(const Noncopyable &);
    Noncopyable & operator=(const Noncopyable &);
};

} // end of namespace md

#endif
