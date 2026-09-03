#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LoadingScreenBlockerInterface.h"
#include "Templates/SubclassOf.h"
#include "RebelLoadingSystem.generated.h"

class UCommonActivatableWidget;

UCLASS(Blueprintable)
class REBELLOADING_API URebelLoadingSystem : public UGameInstanceSubsystem, public ILoadingScreenBlockerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonActivatableWidget> LoadingScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidget* LoadingWidget;
    
public:
    URebelLoadingSystem();

    UFUNCTION(BlueprintCallable)
    void RemoveMainMenuLoadingScreenBlock();
    
    UFUNCTION(BlueprintCallable)
    void AddMainMenuLoadingScreenBlock();
    

    // Fix for true pure virtual functions not being implemented
};

