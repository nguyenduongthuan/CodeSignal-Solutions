bool solution(bool young, bool beautiful, bool loved) {
    // Check if the person contradicts Mary's belief
    if ((young && beautiful && !loved) || (!young || !beautiful) && loved) {
        return true; // Contradicts belief
    } else {
        return false; // Does not contradict belief
    }
}