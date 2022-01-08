using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MobileConsole : MonoBehaviour
{
    static string myLog = "";
    private string output;
    private string stack;

    private Text t;

    void Update(){
        //Debug.Log("Hallo");
        //Debug.LogError("Hallo Error");
        //Debug.LogWarning("Hallo Warning");
        t.text = myLog;
    }

    void OnEnable()
    {
        Application.logMessageReceived += Log;
        t = gameObject.GetComponent<Text>();
    }

    void OnDisable()
    {
        Application.logMessageReceived -= Log;
    }

    public void Log(string logString, string stackTrace, LogType type)
    {
        output = logString;
        stack = stackTrace;
        myLog = output + "\n" + myLog;
        if (myLog.Length > 5000)
        {
            myLog = myLog.Substring(0, 4000);
        }

    }

}