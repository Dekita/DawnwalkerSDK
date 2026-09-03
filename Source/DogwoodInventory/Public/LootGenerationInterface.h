#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LootGenerationData.h"
#include "LootGenerationInterface.generated.h"

UINTERFACE(Blueprintable)
class DOGWOODINVENTORY_API ULootGenerationInterface : public UInterface {
    GENERATED_BODY()
};

class DOGWOODINVENTORY_API ILootGenerationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GenerateItemLoot(const FLootGenerationData& GenerationData);
    
};

