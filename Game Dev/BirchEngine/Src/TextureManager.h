#pragma once

#include "Game.h"

#include <iostream>

class TextureManager
{
public:
	TextureManager();
	~TextureManager();
	static SDL_Texture* LoadTexture(const char* fileName);
	static void Draw(SDL_Texture* tex, SDL_Rect src, SDL_Rect dest);

};

