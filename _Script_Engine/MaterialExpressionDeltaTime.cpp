#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionDeltaTime.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionDeltaTime::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionDeltaTime");
    return result;
}
