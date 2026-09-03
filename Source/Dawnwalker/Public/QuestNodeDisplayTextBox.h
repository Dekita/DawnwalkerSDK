#pragma once
#include "CoreMinimal.h"
#include "QuestNodeWaitingBase.h"
#include "QuestNodeDisplayTextBox.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeDisplayTextBox : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToClose;
    
public:
    UQuestNodeDisplayTextBox();

};

