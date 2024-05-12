#include "PascalsTriangle.h"

std::list<uint64_t> getPascalsTriangleRow(uint64_t rowNumber)
{
    std::list<uint64_t> list;

    for (uint64_t index = 0; index <= rowNumber; index++)
    {
        list.push_front(1);

        for (std::list<uint64_t>::iterator it = list.begin(); it != list.end(); ++it)
        {
            if (it != list.begin())
            {
                uint64_t next = 0;

                if (std::next(it) != list.end()) next = *std::next(it);

                *it += next;
            }
        }
    }

    return list;
}
