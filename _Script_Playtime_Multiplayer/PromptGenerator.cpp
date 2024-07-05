#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "PromptGenerator.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PromptGenerator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PromptGenerator");
    return result;
}
void _Script_Playtime_Multiplayer::PromptGenerator::GetPrompt(void*& PromptPrefix, void*& PromptSuffix, bool& CanPrompt) {
    return;
}
