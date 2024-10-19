#include "olcConsoleGameEngine.h"

struct vec3d
{
	float x; // defines the outline of the triangle
	float y;
	float z;
};

struct triangle 
{
	vec3d p[3]; // Contains 3 vertices or "vec3ds"
};

struct mesh
{
	std::vector<triangle> tris; // Represents objects
};

class olcEngine3D : public olcConsoleGameEngine
{
public:

	olcEngine3D()
	{
		m_sAppName = L"3D Demo";
	}


public:

	bool OnUserCreate() override
	{
		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		return true;
	}
};

int main()
{
	olcEngine3D demo;

	if (demo.ConstructConsole(256, 240, 4, 4))
		demo.Start();



	return 0;
}