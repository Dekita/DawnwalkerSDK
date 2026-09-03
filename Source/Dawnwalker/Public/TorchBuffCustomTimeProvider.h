#pragma once
#include "CoreMinimal.h"
#include "CharacterBuffCustomTimeProvider.h"
#include "TorchBuffCustomTimeProvider.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UTorchBuffCustomTimeProvider : public UCharacterBuffCustomTimeProvider {
    GENERATED_BODY()
public:
    UTorchBuffCustomTimeProvider();

};

