#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionNamedRerouteBase.hpp"
#include "MaterialExpressionRerouteBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionNamedRerouteBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionNamedRerouteBase");
    return result;
}
