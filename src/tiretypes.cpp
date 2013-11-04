#include <map>
#include <string>

enum TYPE
{
	NO_TIRES,
	NORMAL,
	SPIKED,
	OFFROAD
};

class TireTypes
{
private:
	typedef std::map<TYPE, int> MapType;
	MapType x;

	static const TireTypes m_tireTypes;

	TireTypes()
	{
		x[NO_TIRES] = 0;
		x[NORMAL]   = 1;
		x[SPIKED]   = 2;
		x[OFFROAD]  = 3;
	}
public:
    static int const& getValue(TYPE value)
    {
    	MapType::const_iterator find = m_tireTypes.x.find(value);
        if (find != m_tireTypes.x.end())
        {
            return find->second;
        }
        return 0;
    }
};
