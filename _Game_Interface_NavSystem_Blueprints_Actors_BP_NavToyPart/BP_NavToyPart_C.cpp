#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor\BP_NavBaseActor_C.hpp"
#include "BP_NavToyPart_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Game_Interface_NavSystem_Blueprints_Actors_BP_NavToyPart::BP_NavToyPart_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Interface/NavSystem/Blueprints/Actors/BP_NavToyPart.BP_NavToyPart_C");
    return result;
}