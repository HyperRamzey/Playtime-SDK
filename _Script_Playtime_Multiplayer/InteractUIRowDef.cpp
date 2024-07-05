#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "InteractUIRowDef.hpp"
void* _Script_Playtime_Multiplayer::InteractUIRowDef::get_InteractText() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_Engine::Texture2D*& _Script_Playtime_Multiplayer::InteractUIRowDef::get_Icon() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::InteractUIRowDef::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.InteractUIRowDef");
    return result;
}
