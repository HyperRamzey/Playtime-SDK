#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "FieldSystem.hpp"
_Script_CoreUObject::Class* _Script_FieldSystemEngine::FieldSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.FieldSystem");
    return result;
}
