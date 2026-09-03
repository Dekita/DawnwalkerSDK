#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TutorialSchema.generated.h"

class UWorld;

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class DOGWOODSYSTEM_API UTutorialSchema : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* CurrentWorld;
    
public:
    UTutorialSchema();

protected:
    UFUNCTION(BlueprintNativeEvent)
    void ShowTutorial(const int64 RequestID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsImmediate() const;
    
};

