#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CommunityBaseDebug.generated.h"

class UActorStub;
class UCommunityBaseDebug;

UCLASS(Abstract, Blueprintable)
class DAWNWALKER_API UCommunityBaseDebug : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExpanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCommunityBaseDebug*> Children;
    
public:
    UCommunityBaseDebug();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugString() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UActorStub*> GetAllActorStubs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActivate() const;
    
};

