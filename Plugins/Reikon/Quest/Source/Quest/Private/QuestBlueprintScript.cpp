#include "QuestBlueprintScript.h"

UQuestBlueprintScript::UQuestBlueprintScript() {
    this->State = EQBlueprintScriptState::EQBS_None;
}



void UQuestBlueprintScript::SetState(const EQBlueprintScriptState InState) {
}

EQBlueprintScriptState UQuestBlueprintScript::GetState() const {
    return EQBlueprintScriptState::EQBS_None;
}

FString UQuestBlueprintScript::GetNodeDescription_Implementation() const {
    return TEXT("");
}

void UQuestBlueprintScript::EndScript(const EQBlueprintScriptState InState) {
}


