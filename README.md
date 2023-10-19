## Collaborative Project Submission via GitHub

Objective:
In this task, students are required to contribute to a collaborative project hosted on GitHub. The objective is to familiarize students with the version control system Git, and the GitHub platform, while also fostering collaborative project contributions.

Instructions:

1. **Forking the Repository**:
   - Visit the repository URL: [https://github.com/prabaljainn/az-git-repo](https://github.com/prabaljainn/az-git-repo)
   - Click on the 'Fork' button located at the top-right corner of the page. This will create a copy of the repository under your GitHub account.

2. **Cloning Your Forked Repository**:
   - Clone the forked repository to your local machine by copying the URL of your fork (found on your GitHub account) and running the following command in your terminal:
     ```
     git clone <URL-of-your-fork>
     ```

3. **Creating a New Folder**:
   - Navigate to the repository directory on your local machine.
   - Create a new folder named in the format `yourName_college`.
     ```
     mkdir yourName_college
     ```

4. **Adding Your Work**:
   - Place some files or your work in the `yourName_college` folder.
   - It could be code files, documentation, or any other relevant work.

5. **Creating a Pull Request (PR)**:
   - Stage your changes by running:
     ```
     git add .
     ```
   - Commit your changes with a meaningful commit message:
     ```
     git commit -m "Added my work in yourName_college folder"
     ```
   - Push your changes to your forked repository on GitHub:
     ```
     git push origin master
     ```
   - Go to the original repository [https://github.com/prabaljainn/az-git-repo](https://github.com/prabaljainn/az-git-repo) on GitHub, navigate to the 'Pull requests' tab, and click on 'New pull request'.
   - Compare changes, ensuring that the base repository is `prabaljainn/az-git-repo` and the head repository is your fork, then create a new pull request.

Resources:

- For a quick reference to Git commands, refer to the [GitHub Git Cheat Sheet](https://training.github.com/downloads/github-git-cheat-sheet.pdf).

- After practicing Git commands in the terminal, enhance your experience with Git in Visual Studio Code by using the following extensions:
  1. [Git Graph](https://marketplace.visualstudio.com/items?itemName=mhutchie.git-graph) to visualize branches and commits.
  2. [GitLens](https://marketplace.visualstudio.com/items?itemName=eamodio.gitlens) to supercharge Git capabilities within VS Code.

Evaluation:
Your submission will be evaluated based on the following criteria:
- Adherence to instructions.
- Quality and relevance of the submitted work.
- Proper use of Git and GitHub features.
- Clear and descriptive commit messages.

Note: Ensure to practice using Git in the terminal before transitioning to using the VS Code Git extensions.
