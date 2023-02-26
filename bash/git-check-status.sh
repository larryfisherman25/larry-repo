#!/bin/bash

# Loop through all directories in the current folder
for d in */ ; do
    # Check if the directory is a Git repository
    if [ -d "$d/.git" ]; then
        # Print the name of the Git repository
        echo "Checking repository: $d"
        # Change directory into the Git repository
        cd "$d"
        # Fetch all changes from the remote repository
        git fetch
        # Check the status of the local branch
        git status
        # Add all changes to the staging area
        git add .
        # Commit changes with a default commit message
        git commit -m "Update"
        # Push changes to the remote repository
        git push
        # Return to the parent directory
        cd ..
    fi
done
