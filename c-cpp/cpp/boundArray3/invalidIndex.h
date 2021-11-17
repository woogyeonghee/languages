#ifndef INVALIDINDEX_H
#define INVALIDINDEX_H

class InvalidIndex
{
public:
    explicit InvalidIndex(int index);

    int invalid() const;

private:
    int index_;
};


#endif
