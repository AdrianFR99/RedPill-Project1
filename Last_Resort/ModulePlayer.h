#ifndef __ModulePlayer_H__
#define __ModulePlayer_H__

#include "Module.h"
#include "Animation.h"
#include "Globals.h"
#include "p2Point.h"

struct SDL_Texture;

class ModulePlayer : public Module
{
public:
	ModulePlayer();
	~ModulePlayer();

	bool Start();
	update_status Update();
	bool CleanUp();

public:
	SDL_Rect Ship;
	SDL_Texture* graphics = nullptr;
	Animation Up;
	Animation Down;
	Animation Standard;
	Animation idle;
	iPoint position;
	
	void resetPosition() {
		position.x = 20;
		position.y = SCREEN_HEIGHT / 2;

	};

};

#endif