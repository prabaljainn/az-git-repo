#include <iostream>
#include <string>

class JobInterview {
public:
    void askProgrammingQuestion() const {
        std::cout << "Explain the difference between struct and class in C++." << std::endl;
    }

    bool evaluateAnswer(const std::string& answer) const {
        return answer.find("access specifiers") != std::string::npos;
    }
};

class Candidate {
public:
    void giveAnswer() const {
        std::cout << "Well, struct is when you have less code, and class is when you have a lot of code." << std::endl;
    }
};

int main() {
    JobInterview interview;
    Candidate candidate;
    
    interview.askProgrammingQuestion();
    candidate.giveAnswer();
    
    if (interview.evaluateAnswer(candidate.giveAnswer())) {
        std::cout << "Hired!" << std::endl;
    } else {
        std::cout << "We'll get back to you..." << std::endl;
    }
    
    return 0;
}
