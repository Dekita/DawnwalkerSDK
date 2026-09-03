#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "QuestBlueprintBase.generated.h"

class AActor;
class UWorld;

UCLASS(Abstract, Blueprintable)
class DOGWOODQUEST_API UQuestBlueprintBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
public:
    UQuestBlueprintBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetWorldContext(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Execute();
    
};

