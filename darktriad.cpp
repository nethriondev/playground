#include <iostream>
#include <string>

using namespace std;

int main() {
    const int NUM_QUESTIONS = 12;
    int responses[12];
    string questions[12] = {
        "1. I tend to manipulate others to get my way.",
        "2. I have used deceit or lied to get my way.",
        "3. I have used flattery to get my way.",
        "4. I tend to exploit others towards my own end.",
        "5. I tend to lack remorse.",
        "6. I tend to be unconcerned with the morality of my actions.",
        "7. I tend to be callous or insensitive.",
        "8. I tend to want others to admire me.",
        "9. I tend to want others to pay attention to me.",
        "10. I tend to seek prestige or status.",
        "11. I tend to expect special favors from others.",
        "12. I tend to want others to compliment me."
    };
    
    cout << "=============================================\n";
    cout << "     DARK TRIAD PERSONALITY TEST\n";
    cout << "=============================================\n\n";
    
    cout << "Rate each statement from 1 to 7:\n";
    cout << "1 = Disagree strongly\n";
    cout << "2 = Disagree moderately\n";
    cout << "3 = Disagree a little\n";
    cout << "4 = Neither agree nor disagree\n";
    cout << "5 = Agree a little\n";
    cout << "6 = Agree moderately\n";
    cout << "7 = Agree strongly\n\n";
    
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        int answer;
        do {
            cout << questions[i] << " ";
            cin >> answer;
            
            if (answer < 1 || answer > 7) {
                cout << "Please enter a number between 1 and 7.\n";
            }
        } while (answer < 1 || answer > 7);
        
        responses[i] = answer;
    }
    
    int machScore = responses[0] + responses[1] + responses[2] + responses[3];
    int psychScore = responses[4] + responses[5] + responses[6];
    int narcScore = responses[7] + responses[8] + responses[9] + responses[10] + responses[11];
    
    cout << "\n\n=============================================\n";
    cout << "              YOUR RESULTS\n";
    cout << "=============================================\n\n";
    
    cout << "Machiavellianism: " << machScore << "/28\n";
    cout << "Interpretation: ";
    if (machScore >= 22) cout << "Very High - Strong tendency toward manipulation\n";
    else if (machScore >= 17) cout << "High - Comfortable using tactics to get what you want\n";
    else if (machScore >= 11) cout << "Moderate - Balanced approach\n";
    else if (machScore >= 6) cout << "Low - Prefers honest communication\n";
    else cout << "Very Low - Highly transparent\n";
    
    cout << "\nPsychopathy: " << psychScore << "/21\n";
    cout << "Interpretation: ";
    if (psychScore >= 17) cout << "Very High - Significant lack of empathy\n";
    else if (psychScore >= 13) cout << "High - Tends toward callousness\n";
    else if (psychScore >= 8) cout << "Moderate - Balanced emotional responses\n";
    else if (psychScore >= 4) cout << "Low - Generally empathetic\n";
    else cout << "Very Low - Strong empathy and moral concern\n";
    
    cout << "\nNarcissism: " << narcScore << "/35\n";
    cout << "Interpretation: ";
    if (narcScore >= 28) cout << "Very High - Strong need for admiration\n";
    else if (narcScore >= 21) cout << "High - Seeks attention and prestige\n";
    else if (narcScore >= 14) cout << "Moderate - Balanced self-regard\n";
    else if (narcScore >= 7) cout << "Low - Humble, doesn't seek spotlight\n";
    else cout << "Very Low - Extremely modest\n";
    
    cout << "\n---------------------------------------------\n";
    cout << "         PROFILE SUMMARY\n";
    cout << "---------------------------------------------\n\n";
    
    if (machScore >= 17 && psychScore >= 13 && narcScore >= 21) {
        cout << "High on all three traits - Classic Dark Triad\n";
    }
    else if (machScore >= 17 && psychScore < 8 && narcScore < 14) {
        cout << "Strategic Manipulator - High Machiavellianism\n";
        cout << "You use tactics to get what you want but still have empathy\n";
    }
    else if (machScore < 11 && psychScore >= 13 && narcScore < 14) {
        cout << "Callous but not manipulative\n";
        cout << "You struggle with empathy but don't actively manipulate\n";
    }
    else if (machScore < 11 && psychScore < 8 && narcScore >= 21) {
        cout << "Attention-Seeker - High narcissism only\n";
        cout << "You want admiration but aren't manipulative or callous\n";
    }
    else if (machScore >= 17 && psychScore >= 13 && narcScore < 14) {
        cout << "Manipulative and Callous\n";
        cout << "You manipulate others and lack empathy\n";
    }
    else if (machScore >= 17 && psychScore < 8 && narcScore >= 21) {
        cout << "Charming Strategist\n";
        cout << "You use charm and manipulation for attention\n";
    }
    else {
        cout << "Mixed/Moderate traits\n";
        cout << "No single dominant dark personality pattern\n";
    }
    
    cout << "\n=============================================\n";
    cout << "Note: This is for educational purposes only.\n";
    cout << "Not a clinical diagnosis.\n";
    cout << "=============================================\n";
    
    cout << "\nThank you for taking the test!\n";
    
    return 0;
}