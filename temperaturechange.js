import { StatusBar } from 'expo-status-bar';
import React, { useState }from 'react';
import { StyleSheet, Text, View, Button } from 'react-native';

export default function AllText({title,NewState,setNewState}) {
    function numUp() {
        var num = NewState+1
        setNewState(num)
    }
    const numbDown=()=> {
        var num =NewState-1
        setNewState(num)
    }
    const reset=()=> {
        
        setNewState(0)
    }
    return (
      <>
    <View style={styles.container}>
    <Text style={{color: 'black', fontSize: 30, fontStyle: 'italic', fontWeight: 'bold'}}>{title}</Text>
      <Button title="+" onPress={()=>{numUp()}}/>
      <Text style={{color: 'fuchsia', fontSize: 20, fontWeight: 'bold'}}> {NewState}°C     {(NewState * 9/5) + 32 }°F </Text>
      <Button title="-" onPress={()=>{numbDown()}}/>
      <Button title="Reset" onPress={()=>{reset()}}/>
      <StatusBar style="auto" />
    </View>
    </>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#00ffff',
    alignItems: 'center',
    justifyContent: 'space-evenly',
  },
});
