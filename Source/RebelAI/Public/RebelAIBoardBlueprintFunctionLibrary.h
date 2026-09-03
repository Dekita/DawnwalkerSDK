#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RebelAIBoardBlueprintFunctionLibrary.generated.h"

class URebelAIStub;

UCLASS(Blueprintable)
class REBELAI_API URebelAIBoardBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URebelAIBoardBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetReactionToShouldAbortCommunityBehavior(URebelAIStub* AIStub);
    
    UFUNCTION(BlueprintCallable)
    static void SetIgnoreGuardAreas(const URebelAIStub* AIStubm, bool bIgnore);
    
    UFUNCTION(BlueprintCallable)
    static void RequestRestoreCurrentReactionAfterBehaviorChange(const URebelAIStub* AIStub);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLeaderOrFollowerOfPlayer(const URebelAIStub* AIStub);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLeaderOrFollower(const URebelAIStub* AIStub);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsReadyForFinisher(const URebelAIStub* AIStub);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsInReactionAndShouldAbortCommunityBehavior(const URebelAIStub* AIStub);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsInReaction(const URebelAIStub* AIStub);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsInLeaderMode(const URebelAIStub* AIStub);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsInFollowerMode(const URebelAIStub* AIStub);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsInCombat(const URebelAIStub* AIStub);
    
};

