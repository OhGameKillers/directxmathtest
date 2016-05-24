// This test file validates the optional _XM_NO_MOVNT_ define

#pragma warning(disable : 4514 4668) // Disable "off by default" warnings when bulding with /Wall

#pragma warning(disable : 5029) // Can remove when __vector4i is marked deprecated

#define _XM_NO_MOVNT_
#include <directxmath.h>
#include <directxcolors.h>
#include <directxpackedvector.h>
#include <directxcollision.h>