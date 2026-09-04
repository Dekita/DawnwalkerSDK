#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "QuestImGuiHelper.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UQuestImGuiHelper : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CurrentCookCache;
    
public:
    UQuestImGuiHelper();

};

