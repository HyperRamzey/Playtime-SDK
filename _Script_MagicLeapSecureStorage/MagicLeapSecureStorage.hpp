#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_Engine {
struct SaveGame;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_MagicLeapSecureStorage {
#pragma pack(push, 1)
struct MagicLeapSecureStorage : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool PutSecureVector(void* Key, _Script_CoreUObject::Vector& DataToStore);
    bool PutSecureTransform(void* Key, _Script_CoreUObject::Transform& DataToStore);
    bool PutSecureString(void* Key, void* DataToStore);
    bool PutSecureSaveGame(void* Key, _Script_Engine::SaveGame* ObjectToStore);
    bool PutSecureRotator(void* Key, _Script_CoreUObject::Rotator& DataToStore);
    bool PutSecureInt64(void* Key, void* DataToStore);
    bool PutSecureInt(void* Key, int32_t DataToStore);
    bool PutSecureFloat(void* Key, float DataToStore);
    bool PutSecureByte(void* Key, void* DataToStore);
    bool PutSecureBool(void* Key, bool DataToStore);
    bool PutSecureArray(void* Key, void*& DataToStore);
    bool GetSecureVector(void* Key, _Script_CoreUObject::Vector& DataToRetrieve);
    bool GetSecureTransform(void* Key, _Script_CoreUObject::Transform& DataToRetrieve);
    bool GetSecureString(void* Key, void*& DataToRetrieve);
    bool GetSecureSaveGame(void* Key, _Script_Engine::SaveGame*& ObjectToRetrieve);
    bool GetSecureRotator(void* Key, _Script_CoreUObject::Rotator& DataToRetrieve);
    bool GetSecureInt64(void* Key, void*& DataToRetrieve);
    bool GetSecureInt(void* Key, int32_t& DataToRetrieve);
    bool GetSecureFloat(void* Key, float& DataToRetrieve);
    bool GetSecureByte(void* Key, void*& DataToRetrieve);
    bool GetSecureBool(void* Key, bool& DataToRetrieve);
    bool GetSecureArray(void* Key, void*& DataToRetrieve);
    bool DeleteSecureData(void* Key);
}; // Size: 0x28
#pragma pack(pop)
}
